#ifndef MIMETYPES_H
#define MIMETYPES_H

#include <stddef.h>

#define MAX_MIMETYPES 10

typedef struct {
	const char *name;
	const char *mimetypes[MAX_MIMETYPES];
} Category;

static const Category categories[] = {
	{"Web Browser", {"text/html", "x-scheme-handler/http", "x-scheme-handler/https", NULL}},
	{"File Manager", {"inode/directory", NULL}},
	{"PDF Reader", {"application/pdf", NULL}},
	{"Text Editor", {"text/plain", NULL}},
	{"Code Editor", {"text/x-csrc", "text/x-python", "text/x-javascript", "application/x-shellscript", NULL}},
	{"Image Viewer", {"image/jpeg", "image/png", "image/gif", "image/bmp", "image/webp", "image/svg+xml", NULL}},
	{"Video Player", {"video/mp4", "video/x-matroska", "video/webm", "video/quicktime", "video/x-msvideo", NULL}},
	{"Audio Player", {"audio/mpeg", "audio/ogg", "audio/wav", "audio/flac", "audio/aac", NULL}},
	{"Mail Client", {"x-scheme-handler/mailto", "message/rfc822", NULL}},
	{"Archive Manager", {"application/zip", "application/x-tar", "application/x-gzip", "application/x-bzip2", "application/x-7z-compressed", "application/x-rar", NULL}},
	{"Torrent Client", {"application/x-bittorrent", "x-scheme-handler/magnet", NULL}},
	{"Word Processor", {"application/vnd.openxmlformats-officedocument.wordprocessingml.document", "application/msword", "application/vnd.oasis.opendocument.text", NULL}},
	{"Spreadsheet", {"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", "application/vnd.ms-excel", "application/vnd.oasis.opendocument.spreadsheet", NULL}},
	{"Presentation", {"application/vnd.openxmlformats-officedocument.presentationml.presentation", "application/vnd.ms-powerpoint", "application/vnd.oasis.opendocument.presentation", NULL}},
	{NULL, {NULL}}};

#endif // MIMETYPES_H
