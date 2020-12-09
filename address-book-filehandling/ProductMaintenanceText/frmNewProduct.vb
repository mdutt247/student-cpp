Public Class frmNewProduct

    Public Product As Product

    Private Sub btnSave_Click(ByVal sender As System.Object,
            ByVal e As System.EventArgs) Handles btnSave.Click
        If IsValidData() Then
            Product = New Product(txtCode.Text, txtDescription.Text,
                CDec(txtPrice.Text))
            Me.Close()
        End If
    End Sub

    Private Function IsValidData() As Boolean
        Return Validator.IsPresent(txtCode) AndAlso
               Validator.IsPresent(txtDescription) AndAlso
               Validator.IsPresent(txtPrice) AndAlso
               Validator.IsDecimal(txtPrice)
    End Function

    Private Sub btnCancel_Click(ByVal sender As System.Object,
            ByVal e As System.EventArgs) Handles btnCancel.Click
        Me.Close()
    End Sub
End Class