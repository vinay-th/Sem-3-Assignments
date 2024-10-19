<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="EmpInfo/Employee/EmpName">
		<html>
			<body>
				<h1>Employee Name: <xsl:value-of select="fName"/> <xsl:value-of select="lName"/></h1>
				<h5>Employee Number: <xsl:value-of select="@eId"/></h5>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>