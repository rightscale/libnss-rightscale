#ifndef NSS_RIGHTSCALE_UTILS_H
#define NSS_RIGHTSCALE_UTILS_H

#include <grp.h>
#include <pwd.h>
#include <shadow.h>

/* Read and parse entries from the RightScale policy file */
void set_policy_file(char *);
FILE* open_policy_file();
void close_policy_file(FILE *);
struct rs_user * read_next_policy_entry(FILE *, int *);
enum nss_status fill_passwd(struct passwd *, char *, size_t, struct rs_user *, int, int *);
enum nss_status fill_spwd(struct spwd *, char *, size_t, struct rs_user *, int, int *);
enum nss_status fill_group(struct group *, char *, size_t, struct group *, int *);
void free_rs_user(struct rs_user *);

#endif
