# webserver-api

 * Lifetime of your handlers should be: Create all when your web server starts up, and it stays around for the life of your server.
 * The handlers should be subclasses of a RequestHandler interface that James posted.
 * Config passing will be done by map.
 * Dispatching to handlers should be done by map from path to handler.
