<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<body>
				<table border='1'>
					<thead>
						<tr>
							<th colspan="6">
								<h2>Order Details</h2>
							</th>
						</tr>
						<tr>
							<th>Order Number</th>
							<th>Order Date</th>
							<th>Order Amount</th>
							<th>Item Price</th>
							<th>Item Name</th>
							<th>Quantity</th>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="OrderDetails">
							<tr>
								<td><xsl:value-of select="OrderNo"/></td>
								<td><xsl:value-of select="OrdeRate"/></td>
								<td><xsl:value-of select="OrderAmount"/></td>
								<td><xsl:value-of select="ItemPrice"/></td>
								<td><xsl:value-of select="ItemName"/></td>
								<td><xsl:value-of select="Quantity"/></td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>