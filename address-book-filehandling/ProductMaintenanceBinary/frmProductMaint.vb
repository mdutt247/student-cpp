Public Class frmProductMaint

    Dim products As List(Of Product)

    Private Sub frmProductMaint_Load(ByVal sender As System.Object,
            ByVal e As System.EventArgs) Handles MyBase.Load
        products = ProductDB.GetProducts
        Me.FillProductListBox()
    End Sub

    Private Sub FillProductListBox()
        lstProducts.Items.Clear()
        For Each p As Product In products
            lstProducts.Items.Add(p.GetDisplayText(vbTab))
        Next
    End Sub

    Private Sub btnAdd_Click(ByVal sender As System.Object,
            ByVal e As System.EventArgs) Handles btnAdd.Click
        Dim newProductForm As New frmNewProduct
        newProductForm.ShowDialog()
        If newProductForm.Product IsNot Nothing Then
            products.Add(newProductForm.Product)
            ProductDB.SaveProducts(products)
            Me.FillProductListBox()
        End If
    End Sub

    Private Sub btnDelete_Click(ByVal sender As System.Object,
            ByVal e As System.EventArgs) Handles btnDelete.Click
        Dim i As Integer = lstProducts.SelectedIndex
        If i <> -1 Then
            Dim product As Product = products(i)
            Dim message As String = "Are you sure you want to delete " &
                product.Description & "?"
            Dim button As DialogResult = MessageBox.Show(message,
                "Confirm Delete", MessageBoxButtons.YesNo)
            If button = DialogResult.Yes Then
                products.Remove(product)
                ProductDB.SaveProducts(products)
                Me.FillProductListBox()
            End If
        End If
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object,
            ByVal e As System.EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
