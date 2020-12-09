Imports System.IO

Public Class ProductDB
    ' Use file in project directory
    Private Const Dir As String = "..\..\"

    Private Const Path As String = Dir & "Products.txt"

    Public Shared Function GetProducts() As List(Of Product)

        If Not Directory.Exists(Dir) Then
            Directory.CreateDirectory(Dir)
        End If

        Dim textIn As New StreamReader(
            New FileStream(Path, FileMode.OpenOrCreate, FileAccess.Read))

        Dim products As New List(Of Product)

        Do While textIn.Peek <> -1
            Dim row As String = textIn.ReadLine
            Dim columns As String() = row.Split(CChar("|"))
            Dim product As New Product
            product.Code = columns(0)
            product.Description = columns(1)
            product.Price = CDec(columns(2))
            products.Add(product)
        Loop

        textIn.Close()

        Return products

    End Function

    Public Shared Sub SaveProducts(ByVal products As List(Of Product))

        Dim textOut As New StreamWriter(
            New FileStream(Path, FileMode.Create, FileAccess.Write))

        For Each product As Product In products
            textOut.Write(product.Code & "|")
            textOut.Write(product.Description & "|")
            textOut.WriteLine(product.Price)
        Next

        textOut.Close()
    End Sub

End Class
