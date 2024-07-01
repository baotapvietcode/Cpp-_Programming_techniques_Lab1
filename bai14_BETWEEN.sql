-- Bài 14: Toán tử BETWEEN trong SQL. --

-- A. Ví dụ. --
/* Ví dụ 01: Viết câu lệnh SQL lấy danh sách các sản phẩm có giá bán (UnitPrice)
từ 10 đến 20 đô la từ [bảng Products]. */
-- Cách 1:
SELECT *
FROM [Products]
WHERE [UnitPrice] BETWEEN 10 AND 20;
GO
-- Cách 2:
SELECT *
FROM [Products]
WHERE [UnitPrice] >= 10 AND [UnitPrice] <= 20;
GO
/* Ví dụ 02: Viết câu lệnh SQL lấy ra danh sách các đơn đặt hàng được đặt trong khoảng
thời gian (OrderDate) từ '1996-07-01' đến '1996-07-31' từ [bảng Orders]. */
SELECT *
FROM [Orders]
WHERE [OrderDate] BETWEEN '1996-07-01' AND '1996-07-31';
GO
/* Ví dụ 03: Viết câu lệnh SQL tính tổng số tiền vận chuyển (Freight) của các đơn đặt hàng
từ '1996-07-01' đến '1996-07-31' từ [bảng Orders]. */
SELECT SUM(Freight) AS [TotalFreight]
FROM [Orders]
WHERE [OrderDate] BETWEEN '1996-07-01' AND '1996-07-31';
GO

-- B. Bài tập. --
/* Bài tập 01: Viết câu lệnh SQL lấy ra danh sách các đơn đặt hàng được đặt trong khoảng
thời gian (OrderDate) từ '1997-01-01' đến '1997-12-31' và được vận chuyển bằng đường tàu thủy
(ShipVia = 3) từ [bảng Orders]. */
SELECT *
FROM [Orders]
WHERE ([OrderDate] BETWEEN '1997-01-01' AND '1997-12-31') AND ([ShipVia] = 3);
GO

-- C. Thử thách. --
/* Thử thách 01: Viết câu lệnh SQL lấy ra 2 nhân viên đến từ quốc gia (Country) là 'USA'
và có ngày bắt đầu đi làm (HireDate) từ '1993-05-03' đến '1994-03-05' từ [bảng Employees]. */
SELECT TOP 2 *
FROM [Employees]
WHERE ([Country] = 'USA') AND ([HireDate] BETWEEN '1993-05-03' AND '1994-03-05');
GO
/* Thử thách 02: Viết câu lệnh SQL tính giá trị của các đơn đặt hàng, biết số lượng (Quantity) đơn đặt hàng
cần lấy là từ 10 đến 30 hoặc đơn giá (UnitPrice) từ 18$ đến 200$, và sau đó sắp xếp các bản ghi dựa theo
thứ tự giảm dần của đơn giá (UnitPrice) và số lượng (Quantity) từ [bảng Order Details]. */
SELECT *,
       [UnitPrice] * [Quantity] * (1 - [Discount]) AS [ValueOrder]
FROM [Order Details]
WHERE ([Quantity] BETWEEN '10' AND '30') OR ([UnitPrice] BETWEEN '18' AND '200')
ORDER BY [UnitPrice] DESC, Quantity DESC;
GO












































