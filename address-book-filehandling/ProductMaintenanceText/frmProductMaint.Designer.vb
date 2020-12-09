<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmProductMaint
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        If disposing AndAlso components IsNot Nothing Then
            components.Dispose()
        End If
        MyBase.Dispose(disposing)
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.lstProducts = New System.Windows.Forms.ListBox
        Me.btnExit = New System.Windows.Forms.Button
        Me.btnDelete = New System.Windows.Forms.Button
        Me.btnAdd = New System.Windows.Forms.Button
        Me.SuspendLayout()
        '
        'lstProducts
        '
        Me.lstProducts.FormattingEnabled = True
        Me.lstProducts.Location = New System.Drawing.Point(12, 12)
        Me.lstProducts.Name = "lstProducts"
        Me.lstProducts.Size = New System.Drawing.Size(370, 160)
        Me.lstProducts.TabIndex = 14
        '
        'btnExit
        '
        Me.btnExit.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.btnExit.Location = New System.Drawing.Point(397, 72)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(104, 24)
        Me.btnExit.TabIndex = 13
        Me.btnExit.Text = "E&xit"
        '
        'btnDelete
        '
        Me.btnDelete.Location = New System.Drawing.Point(397, 42)
        Me.btnDelete.Name = "btnDelete"
        Me.btnDelete.Size = New System.Drawing.Size(104, 24)
        Me.btnDelete.TabIndex = 12
        Me.btnDelete.Text = "Delete Product..."
        '
        'btnAdd
        '
        Me.btnAdd.Location = New System.Drawing.Point(397, 12)
        Me.btnAdd.Name = "btnAdd"
        Me.btnAdd.Size = New System.Drawing.Size(104, 24)
        Me.btnAdd.TabIndex = 11
        Me.btnAdd.Text = "Add Product..."
        '
        'frmProductMaint
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.CancelButton = Me.btnExit
        Me.ClientSize = New System.Drawing.Size(516, 183)
        Me.Controls.Add(Me.lstProducts)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnDelete)
        Me.Controls.Add(Me.btnAdd)
        Me.Name = "frmProductMaint"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Product Maintenance"
        Me.ResumeLayout(False)

    End Sub
    Private WithEvents lstProducts As System.Windows.Forms.ListBox
    Private WithEvents btnExit As System.Windows.Forms.Button
    Private WithEvents btnDelete As System.Windows.Forms.Button
    Private WithEvents btnAdd As System.Windows.Forms.Button

End Class
