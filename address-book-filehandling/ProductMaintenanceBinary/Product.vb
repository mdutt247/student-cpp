Public Class Product

    Public Sub New()

    End Sub

    Public Sub New(ByVal code As String, ByVal description As String,
            ByVal price As Decimal)
        Me.Code = code
        Me.Description = description
        Me.Price = price
    End Sub

    Public Property Code() As String

    Public Property Description() As String

    Public Property Price() As Decimal

    Public Function GetDisplayText(ByVal sep As String) As String
        Dim text As String = Code & sep & FormatCurrency(Price) &
                             sep & Description
        Return text
    End Function

End Class
