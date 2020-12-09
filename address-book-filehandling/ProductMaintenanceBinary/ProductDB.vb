Imports System.IO

Public Class ProductDB
    ' Use file in project directory
    Private Const Dir As String = "..\..\"

    Private Const Path As String = Dir & "Products.dat"

    Public Shared Function GetProducts() As List(Of Product)

        If Not Directory.Exists(Dir) Then
            Directory.CreateDirectory(Dir)
        End If

        Dim binaryIn As New BinaryReader(
            New FileStream(Path, FileMode.OpenOrCreate, FileAccess.Read))

        Dim products As New List(Of Product)

        Do While binaryIn.PeekChar <> -1
            Dim product As New Product
            product.Code = binaryIn.ReadString
            product.Description = binaryIn.ReadString
            product.Price = binaryIn.ReadDecimal
            products.Add(product)
        Loop

        binaryIn.Close()

        Return products

    End Function

    Public Shared Sub SaveProducts(ByVal products As List(Of Product))

        Dim binaryOut As New BinaryWriter(
            New FileStream(Path, FileMode.Create, FileAccess.Write))

        For Each product As Product In products
            binaryOut.Write(product.Code)
            binaryOut.Write(product.Description)
            binaryOut.Write(product.Price)
        Next

        binaryOut.Close()

    End Sub

End Class
