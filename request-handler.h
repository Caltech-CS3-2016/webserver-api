using Headers = std::vector<std::pair<std::string, std::string>>;

struct HttpRequest {
  std::string raw_request_;

  std::string method_;
  std::string uri_;
  std::string version_;

  Headers headers_;

  std::string body_;
};

class HttpResponse {
  std::string raw_response_;

  std::string http_version_;
  std::string status_code_;
  std::string reason_phrase_;

  Headers headers_;

  std::string body_;
};

class RequestHandler {
 public:
  virtual bool Init(const std::map<std::string, std::string>& config) = 0;
  virtual bool HandleRequest(const HttpRequest& request, HttpResponse* response) = 0;
};
