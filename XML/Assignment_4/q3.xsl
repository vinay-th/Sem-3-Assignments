<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="Books">
		<html>
			<body>
				<table border="1">
					<thead>
						<tr>
							<td colspan="4">
								BOOKS
							</td>
						</tr>
						<tr>
							<td>Title</td>
							<td>Author</td>
							<td>Year</td>
							<td>Publisher</td>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="Book">
							<xsl:if test="Year &lt; 1998">
								<tr>
									<td><xsl:value-of select="@title" /></td>
									<td><xsl:value-of select="Author" /></td>
									<td><xsl:value-of select="Year" /></td>
									<td><xsl:value-of select="Publisher" /></td>
								</tr>
							</xsl:if>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>