## Mukurtu 2.02
- Hierarchical Digital Heritage items.  Digital Heritage items now support hierarchical relationships to better represent multi-page content.  Ordering is changed by editing the parent node
- add a new 'Transcription' field to the Digital Heritage 'Additional Metadata' section
- fix bug where child communities could be dropped when the parent community was altered
- change default thumbnail handling for Collections view.  If no Collection thumbnail is provided, the view will try to use one of the member's image atoms
- add media specific feed importers for Scald atoms
- update Scald YouTube provider to reflect YouTube API changes
- improve Scald rendering when drag and dropping Scald atoms into multi-line text fields
- set static width and height for in-line Scald audio player during atom edit to fix display issues
- add 'Media Assets' field to Digital Heritage importer that will automatically create or use previously imported Scald atoms
- remove 'published' column from the Digital Heritage importer, as that field is set automatically by feeds
- make some fields required on Digital Heritage import to avoid creating items with no Cultural Protocols
- move Community and Cultural Protocol node views off panels to display suite
- update WYSIWYG to ckeditor and restrict to only editor buttons that work
- allow only protocol stewards to set or unset Parent Communities that they are Community managers of
- change widget for Parent Community field on Protocol nodes
- fine tune search indexing on Digital Heritage nodes and their relations
- stop redirecting users if logging in via services

#### Manual Upgrade Steps
- database update: `drush updb`
- rebuild registry: `drush rr`
- clear all caches: `drush cc all`
- search re-indexing: `drush sapi-r && drush sapi-i`.  Some sites may need to clear indexes: `drush sapi-c`.


## Mukurtu 2.01

- Community Records. Protocol Stewards may create community-specific "Community Records" within Digital Heritage items that share the media assets but otherwise have custom information
- Parent Communities. Communities can now be placed within Parent Communities. Explanation is provided within the field's help text.
- added "Mukurtu Administrator" role, which is the default user role for the primary user on new deployments. It has less than full Administrator permissions.
- major reworking of Digital Heritage Cultural Protocol permissions implementation. Full explanation is in comment in mukurtu_protocol_field.module, "how digital heritage cultural protocol permissions are implemented"
- fixed bug causing users to get wrongly added into Communities and Cultural Protocols
- upgrade Drupal core to 7.35. Addresses a security issue. Removes Pantheon customization.
- security updates to various contrib modules
- rename "Protocol Manager" to "Protocol Steward"
- automatically make the creator of a Community node its Community Manager, and the creator of a Cultural Protocol node its Protocol Steward
- do not redirect user when doing a password reset, fixes infinite loop with trying to reset password
- various readability improvements to the tooltip (popup help text) display on node forms
- added some permissions for the Mukurtu Administrator that were previously linked from the Dashboard but access denied
- users must now be a Protocol Steward or Contributor of a Cultural Protocol instead of just a member of it to be able to add Digital Heritage items to it
- in Digital Heritage form, use semicolon instead of comma as delimiter for multiple values and allow quotes in Digital Heritage taxonomy fields: Creator, Contributor, Keywords, Publisher, Type, Language, and Subject, and provide help text on these fields explaining this
- comma-delimit multiple values for all fields in the Digital Heritage node view, except for Creator and Contributor use one line per value
- link all linkable fields in Digital Heritage node view including Author and the taxonomy fields
- add some spacing between media items in the Digital Heritage full node view (otherwise the "Download" or "{type} Metadata" links can appear to refer to the item below instead of the correct one above
- changed which fields display in the Digital Heritage search result listing
- fix Digital Heritage grid title positioning and width
- removed Cultural Protocol filter from the the Digital Heritage browse page. This is for security reasons, since otherwise a private Cultural Protocol title can show in cases the user does not have access to it
- upgraded Creative Commons license options to their 4.0 versions
- enable media item drag and drop into certain text fields
- extract metadata from all images (not just first) when uploading multiple images in a single media upload
- show thumbnails (if uploaded) for file and audio media items in Digital Heritage node view
- use simple (non-playist) version of the dewplayer for audio items
- use better widget for the Protocol field on media items, and improve the help text explaining what the field is
- added various fields to the search index. Search will now return more results
- list of Indexed Fields page added and linked from Dashboard
- do not show tooltips on the Dashboard blocks, as they block the buttons
- updated Dashboard links style
- updated some Dashboard links text
- "Change Logo" Dashboard link now goes to correct place
- removed deprecated views from Community and Protocol nodes
- do not show Community Members block directly on Community node
- core patch to allow custom logo and favicon with private file system, and limit logo to 70 pixels height
- fix alignment of Collections with no image in Browse Collections
- fix Collections Digital Heritage count not being updated
- moved "About" page into install profile to make it user-customizable, and changed the default text
- added Github README.md file
- disabled automatic cron runs. Self-deployments should use system crontab
- remove various pieces of deprecated (Mukurtu 1.0 and 1.5) code
- remove OG role "Administrator Member"
- disable Admin Menu toolbar by default

#### Manual Upgrade Steps
- search reindexing: `drush sapi-r && drush sapi-i`