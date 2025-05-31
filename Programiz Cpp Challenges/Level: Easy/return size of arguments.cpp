template<typename... Args>
int countParameters(Args... args) {
    return sizeof...(Args);
}
