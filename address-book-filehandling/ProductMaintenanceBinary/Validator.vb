Public Class Validator

    Public Shared Property Title() As String = "Entry Error"

    Public Shared Function IsPresent(ByVal textBox As TextBox) _
            As Boolean
        If textBox.Text = "" Then
            MessageBox.Show(textBox.Tag.ToString & " is a required field.", Title)
            textBox.Select()
            Return False
        Else
            Return True
        End If
    End Function

    Public Shared Function IsDecimal(ByVal textBox As TextBox) _
            As Boolean
        Try
            Convert.ToDecimal(textBox.Text)
            Return True
        Catch ex As FormatException
            MessageBox.Show(textBox.Tag.ToString & " must be a decimal value.", Title)
            textBox.Select()
            textBox.SelectAll()
            Return False
        End Try

    End Function

    Public Shared Function IsInt32(ByVal textBox As TextBox) _
            As Boolean
        Try
            Convert.ToInt32(textBox.Text)
            Return True
        Catch ex As FormatException
            MessageBox.Show(textBox.Tag.ToString & " must be an integer value.", Title)
            textBox.Select()
            textBox.SelectAll()
            Return False
        End Try
    End Function

    Public Shared Function IsWithinRange(ByVal textBox As TextBox,
            ByVal min As Decimal, ByVal max As Decimal) As Boolean
        Dim dNumber As Decimal = CDec(textBox.Text)
        If dNumber < min OrElse dNumber > max Then
            MessageBox.Show(textBox.Tag.ToString & " must be between " &
                min & " and " & max & ".", Title)
            textBox.Select()
            textBox.SelectAll()
            Return False
        Else
            Return True
        End If
    End Function
End Class
