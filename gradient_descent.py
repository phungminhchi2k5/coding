import numpy as np
import matplotlib.pyplot as plt

# Hàm số mẫu: f(x) = x^4 - x^3 - x^2 + 1
def objective_function(x):
    return x**4 - x**3 - x**2 + 1

# Đạo hàm của hàm số
def gradient(x):
    return 4*x**3 - 3*x**2 - 2*x

# Thuật toán gradient descent
def gradient_descent(starting_point, learning_rate, num_iterations):
    trajectory = [starting_point]

    # Tạo đồ thị tổng cộng
    x_vals = np.linspace(-2, 2, 100)
    y_vals = objective_function(x_vals)
    plt.plot(x_vals, y_vals, label='f(x) = x^4 - x^3 - x^2 + 1')

    for i in range(num_iterations):
        current_point = trajectory[-1]
        gradient_value = gradient(current_point)
        current_point = current_point - learning_rate * gradient_value
        trajectory.append(current_point)

        # Chuyển đổi danh sách thành mảng NumPy
        trajectory_array = np.array(trajectory)

        # Vẽ đường di chuyển của gradient descent
        plt.scatter(trajectory_array, objective_function(trajectory_array), color='red', label=f'Iteration {i + 1}')

        plt.title(f'Gradient Descent Iteration {i + 1}')
        plt.xlabel('x')
        plt.ylabel('f(x)')
        plt.legend()
        plt.show()

    return np.array(trajectory)

# Thiết lập các tham số
starting_point = 2.0
learning_rate = 0.01
num_iterations = 10

# Chạy gradient descent
trajectory = gradient_descent(starting_point, learning_rate, num_iterations)
