<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="employees">
		<html>
			<body>
				<table border="1">
					<tr>
						<th>Name</th>
						<th>Department</th>
						<th>Salary</th>
						<th>Joining</th>
					</tr>
					<xsl:for-each select="employee">
						<xsl:sort select="salary" order="descending"/>
						<xsl:choose>
							<xsl:when test="number(joining-year) &gt; 2015 or number(salary) &gt; 60000">
								<tr>
									<td><xsl:value-of select="name"/></td>
									<td><xsl:value-of select="department"/></td>
									<xsl:choose>
										<xsl:when test="number(salary) &gt; 70000">
											<td><xsl:value-of select="salary"/> High Earner</td>
										</xsl:when>
										<xsl:otherwise>
											<td><xsl:value-of select="salary"/></td>
										</xsl:otherwise>
									</xsl:choose>
									<td><xsl:value-of select="joining-year"/></td>
								</tr>
							</xsl:when>
						</xsl:choose>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>