/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DAStatusReport, DASettingsTemplate, NSString, NSURL, NSMutableDictionary;



@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing>
{
    NSInteger _dataclasses;
    BOOL _hasDirtyBits;
    BOOL _hasInitted;
    BOOL _shouldAutodiscoverPrincipalURL;
    BOOL _shouldPromptForPassword;
    BOOL _shouldFailAllTasks;
    NSInteger _originalDataclasses;
    struct __CFDictionary { } *_changeTypesByDataclass;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    DASettingsTemplate *_settingsTemplate;
    DAStatusReport *_statusReport;
    NSString *_embargoedPassword;
    NSURL *_urlToRemoveFromKeychain;
    struct __CFDictionary { } *_consumers;
}

@property NSInteger daAccountVersion; /* unknown property attribute: SsetDAAccountVersion: */
@property(copy,readonly) NSString *tag;
@property(copy,readonly) NSString *persistentUUID;
@property(copy) NSString *accountDescription;
@property(copy) NSString *username;
@property(copy) NSString *user;
@property(copy) NSString *host;
@property NSInteger port;
@property(copy) NSString *password;
@property BOOL useSSL;
@property(readonly) BOOL isChildAccount;
@property(retain,readonly) NSString *scheduleIdentifier;
@property(copy) NSString *scheme;
@property(copy) NSURL *principalURL;
@property(copy) NSString *emailAddress;
@property(copy) NSArray *emailAddresses;
@property BOOL shouldPromptForPassword;
@property(copy) NSData *identityPersist;
@property BOOL shouldFailAllTasks;
@property(readonly) DAStatusReport *statusReport;
@property(retain) DASettingsTemplate *settingsTemplate;
@property BOOL shouldAutodiscoverPrincipalURL;
@property(readonly) NSInteger enabledDataclassesBitmask;

+ (Class)accountClassWithProperties:(id)arg1;
+ (Class)daemonClass;
+ (id)newAccountOfAccountType:(id)arg1;
+ (id)defaultProperties;
+ (id)basicAccountProperties;
+ (Class)classForAccountType:(id)arg1;
+ (Class)clientClass;
+ (Class)accountClass;

- (id)defaultNotesFolder;
- (id)notesFolders;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 consumer:(id)arg9;
- (id)settingsTemplate;
- (BOOL)isCardDAVAccount;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { NSInteger x1; NSInteger x2; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (NSInteger)daAccountVersion;
- (void)_setPersistentUUID:(id)arg1;
- (BOOL)originallyEnabledForDataclass:(NSInteger)arg1;
- (NSInteger)accountChangeTypeForDataclass:(NSInteger)arg1;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)takeValuesFromAccount:(id)arg1;
- (void)_removeHostsToTrust;
- (BOOL)_upgradeSelfFromPreKirkwood;
- (BOOL)shouldPromptForPassword;
- (void)_removePasswordFromKeychainKeepCache:(BOOL)arg1;
- (void)setShouldPromptForPassword:(BOOL)arg1;
- (BOOL)hasDirtyBits;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (void)stopMonitoringFolders;
- (void)setP12Data:(id)arg1 password:(id)arg2;
- (void)setIdentityPersist:(id)arg1;
- (id)_exceptionsDict;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (void)setDAAccountVersion:(NSInteger)arg1;
- (BOOL)haveWarnedAboutCert:(id)arg1;
- (void)setHaveWarnedAboutCert:(id)arg1;
- (BOOL)resetCertWarnings;
- (void)resetStatusReport;
- (BOOL)isLDAPAccount;
- (void)setSettingsTemplate:(id)arg1;
- (void)setShouldAutodiscoverPrincipalURL:(BOOL)arg1;
- (NSInteger)enabledDataclassesBitmask;
- (NSInteger)_actionForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (void)handleTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (void)_handlePasswordNotification:(struct __CFUserNotification { }*)arg1 response:(unsigned long)arg2 callback:(id)arg3;
- (id)accountID;
- (void)setUsername:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (void)_setProperties:(id)arg1;
- (id)version;
- (id)user;
- (NSInteger)port;
- (id)host;
- (id)password;
- (void)tearDown;
- (id)init;
- (id)tag;
- (void)dealloc;
- (id)description;
- (id)scheme;
- (void)setVersion:(id)arg1;
- (id)emailAddress;
- (id)syncStoreIdentifier;
- (BOOL)isDisabled;
- (void)setPort:(NSInteger)arg1;
- (void)setHost:(id)arg1;
- (void)performSearchQuery:(id)arg1 consumer:(id)arg2;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (id)persistentUUID;
- (BOOL)enabledForDataclass:(NSInteger)arg1;
- (id)accountDescription;
- (NSInteger)supportsMailboxSearch;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)cancelSearchQuery:(id)arg1;
- (BOOL)supportsDataclass:(NSInteger)arg1;
- (id)username;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (void)setPassword:(id)arg1;
- (BOOL)shouldFailAllTasks;
- (id)statusReport;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
- (void)handleTrustChallenge:(id)arg1;
- (BOOL)accountContainsEmailAddress:(id)arg1;
- (id)usernameWithoutDomain;
- (id)stateString;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)removeConsumerForTask:(id)arg1;
- (BOOL)isChildAccount;
- (void)setEmbargoedPassword:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)removePasswordFromKeychain;
- (NSInteger)accountIntPropertyForKey:(id)arg1;
- (void)setAccountIntProperty:(NSInteger)arg1 forKey:(id)arg2;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (void)saveAccountProperties;
- (id)identityPersist;
- (void)saveAccountSettings;
- (void)cleanupAccountFiles;
- (void)checkValidityWithConsumer:(id)arg1;
- (BOOL)upgradeAccount;
- (BOOL)accountNeedsUpgrade;
- (void)setEnabled:(BOOL)arg1 forDataclass:(NSInteger)arg2 changeType:(NSInteger)arg3;
- (void)resetAccountID;
- (id)defaultContactsFolder;
- (id)contactsFolders;
- (id)defaultEventsFolder;
- (id)eventsFolders;
- (id)defaultContainerIdentifierForDADataclass:(NSInteger)arg1;
- (void)cancelAutodiscovery;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (void)setEmailAddress:(id)arg1;
- (id)urlForKeychain;
- (BOOL)isActiveSyncAccount;
- (BOOL)isEqualToAccount:(id)arg1;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (BOOL)useSSL;
- (void)cancelAllSearchQueries;
- (BOOL)searchQueriesRunning;
- (BOOL)shouldAutodiscoverPrincipalURL;
- (void)saveChildAccountSettingsWithAccountsManager:(id)arg1;
- (id)scheduleIdentifier;
- (BOOL)isCalDAVChildAccount;
- (id)principalURL;
- (BOOL)shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (NSInteger)keychainAccessibilityType;
- (void)setAccountDescription:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (BOOL)isCalDAVAccount;
- (void)setUser:(id)arg1;
- (void)setScheme:(id)arg1;
- (id)owningProfile;
- (BOOL)isOwnedByPayload:(id)arg1;

@end