<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="Students">
	<html>
		<head>
			 <style>
			        body {
			            font-family: Arial, sans-serif;
			            background-color: #f4f4f4;
			            margin: 0;
			            padding: 20px;
			        }
			        table {
			            width: 100%;
			            border-collapse: collapse;
			            margin: 20px 0;
			            box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
			        }
			        th, td {
			            padding: 12px;
			            text-align: left;
			            border: 1px solid #ddd;
			        }
			        th {
			            background-color: #4CAF50;
			            color: white;
			            text-transform: uppercase;
			        }
			        tr:nth-child(even) {
			            background-color: #f9f9f9;
			        }
			        tr:hover {
			            background-color: #f1f1f1;
			        }
			        h1 {
			            text-align: center;
			            color: #333;
			        }
			        caption {
			            font-size: 1.5em;
			            margin: 10px 0;
			            font-weight: bold;
			        }
			</style>
		</head>
		<body>
			<table border="1">
				<thead>
					<tr>
						<td colspan="7">Student Data</td>
					</tr>
					<tr>
						<td>Name</td>
						<td>Address</td>
						<td>Birthdate</td>
						<td>Gender</td>
						<td>Mobile</td>
						<td>Email</td>
						<td>Result</td>
					</tr>
				</thead>
				<tbody>
					<xsl:for-each select="Student">
						<tr>
							<td><xsl:value-of select="Name"/></td>
							<td><xsl:value-of select="PersonalInfo/Address"/></td>
							<td><xsl:value-of select="PersonalInfo/Birthdate"/></td>
							<td><xsl:value-of select="PersonalInfo/Gender"/></td>
							<td><xsl:value-of select="PersonalInfo/MobileNo"/></td>
							<td><xsl:value-of select="PersonalInfo/Email"/></td>
							<td><xsl:value-of select="Result"/></td>
						</tr>
					</xsl:for-each>
				</tbody>
			</table>
		</body>
	</html>
</xsl:template>
</xsl:stylesheet>