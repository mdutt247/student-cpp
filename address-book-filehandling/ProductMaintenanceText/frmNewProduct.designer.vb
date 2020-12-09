<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmNewProduct
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
        Me.btnCancel = New System.Windows.Forms.Button
        Me.btnSave = New System.Windows.Forms.Button
        Me.txtPrice = New System.Windows.Forms.TextBox
        Me.txtDescription = New System.Windows.Forms.TextBox
        Me.txtCode = New System.Windows.Forms.TextBox
        Me.label3 = New System.Windows.Forms.Label
        Me.label2 = New System.Windows.Forms.Label
        Me.label1 = New System.Windows.Forms.Label
        Me.SuspendLayout()
        '
        'btnCancel
        '
        Me.btnCancel.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.btnCancel.Location = New System.Drawing.Point(196, 123)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(88, 23)
        Me.btnCancel.TabIndex = 23
        Me.btnCancel.Text = "&Cancel"
        '
        'btnSave
        '
        Me.btnSave.Location = New System.Drawing.Point(100, 123)
        Me.btnSave.Name = "btnSave"
        Me.btnSave.Size = New System.Drawing.Size(88, 23)
        Me.btnSave.TabIndex = 22
        Me.btnSave.Text = "&Save"
        '
        'txtPrice
        '
        Me.txtPrice.Location = New System.Drawing.Point(100, 83)
        Me.txtPrice.Name = "txtPrice"
        Me.txtPrice.Size = New System.Drawing.Size(56, 20)
        Me.txtPrice.TabIndex = 21
        Me.txtPrice.Tag = "Price"
        '
        'txtDescription
        '
        Me.txtDescription.Location = New System.Drawing.Point(100, 51)
        Me.txtDescription.Name = "txtDescription"
        Me.txtDescription.Size = New System.Drawing.Size(192, 20)
        Me.txtDescription.TabIndex = 20
        Me.txtDescription.Tag = "Description"
        '
        'txtCode
        '
        Me.txtCode.Location = New System.Drawing.Point(100, 19)
        Me.txtCode.Name = "txtCode"
        Me.txtCode.Size = New System.Drawing.Size(56, 20)
        Me.txtCode.TabIndex = 19
        Me.txtCode.Tag = "Code"
        '
        'label3
        '
        Me.label3.Location = New System.Drawing.Point(20, 83)
        Me.label3.Name = "label3"
        Me.label3.Size = New System.Drawing.Size(72, 23)
        Me.label3.TabIndex = 18
        Me.label3.Text = "Price:"
        Me.label3.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'label2
        '
        Me.label2.Location = New System.Drawing.Point(20, 51)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(72, 23)
        Me.label2.TabIndex = 17
        Me.label2.Text = "Description:"
        Me.label2.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'label1
        '
        Me.label1.Location = New System.Drawing.Point(20, 19)
        Me.label1.Name = "label1"
        Me.label1.Size = New System.Drawing.Size(72, 23)
        Me.label1.TabIndex = 16
        Me.label1.Text = "Code:"
        Me.label1.TextAlign = System.Drawing.ContentAlignment.MiddleRight
        '
        'frmNewProduct
        '
        Me.AcceptButton = Me.btnSave
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.CancelButton = Me.btnCancel
        Me.ClientSize = New System.Drawing.Size(322, 161)
        Me.ControlBox = False
        Me.Controls.Add(Me.btnCancel)
        Me.Controls.Add(Me.btnSave)
        Me.Controls.Add(Me.txtPrice)
        Me.Controls.Add(Me.txtDescription)
        Me.Controls.Add(Me.txtCode)
        Me.Controls.Add(Me.label3)
        Me.Controls.Add(Me.label2)
        Me.Controls.Add(Me.label1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.Name = "frmNewProduct"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "New Product"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Private WithEvents btnCancel As System.Windows.Forms.Button
    Private WithEvents btnSave As System.Windows.Forms.Button
    Private WithEvents txtPrice As System.Windows.Forms.TextBox
    Private WithEvents txtDescription As System.Windows.Forms.TextBox
    Private WithEvents txtCode As System.Windows.Forms.TextBox
    Private WithEvents label3 As System.Windows.Forms.Label
    Private WithEvents label2 As System.Windows.Forms.Label
    Private WithEvents label1 As System.Windows.Forms.Label
End Class
