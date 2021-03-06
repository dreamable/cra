function test_int
  disp('**** This file tests the LDI models ****');
  disp('** Test to forward a convex polygon by a LDI model **');
	test_demo
	
function test_demo
  disp('  Create a random LDI model.');
	%A = zeros(2); b = ones(2,1); u = zeros(2,1);
	A = rand(2,2); b = rand(2,1); u = rand(2,1);
	ldi = int_create(A,b,u);
	disp('  The convex polygon to move forward'); 
	hull = [0,1,1,0;0,0,1,1];
	lp = lp_createByHull(hull);
	disp('  Move forward the polygon by the LDI model');
	t =1;
	fwdLP = int_forward(lp,ldi,t);
	fwdHull = lp_project(fwdLP,[1;2]);
	disp('  Plot the result');
	figure;clf;hold on;
	poly_display(hull);
	poly_display(fwdHull,'r');

