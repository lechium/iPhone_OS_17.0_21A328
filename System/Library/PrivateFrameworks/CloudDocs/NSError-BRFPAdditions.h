//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BRFPAdditions)
+ (id)brc_errorCantFetchLatestVersionOnItem:(id)arg1 description:(id)arg2;	// IMP=0x008000000004eee4
+ (id)brc_errorRescheduleDownloadForMoreRecentServerVersion;	// IMP=0x008000000004eeb3
+ (id)brc_errorCantCallFPInSyncBubble;	// IMP=0x008000000004ee82
+ (id)brc_errorNoEtagAvailableForDownloadOfItemWithIdentifier:(id)arg1;	// IMP=0x008000000004ee4a
+ (id)brc_errorRequestedVersionHasLocalEdits;	// IMP=0x008000000004ee19
+ (id)brc_errorNoEtagInContentSignature;	// IMP=0x008000000004ede8
+ (id)brc_errorExcludedFromSyncDueToFilename;	// IMP=0x008000000004edb7
+ (id)brc_errorExcludedFromSyncUnderRoot;	// IMP=0x008000000004ed86
+ (id)brc_errorDeletingNonEmptyDirectoryNonRecursively;	// IMP=0x008000000004ed55
+ (id)brc_errorItemProcessingDisabled;	// IMP=0x008000000004ed24
+ (id)brc_unkownErrorWithDescription:(id)arg1;	// IMP=0x008000000004ecec
+ (id)brc_errorDocumentIsNotGreedy;	// IMP=0x008000000004ecbb
+ (id)brc_errorBuddyFlowNeedsToRun;	// IMP=0x008000000004ec8a
+ (id)brc_errorCorruptedDB;	// IMP=0x008000000004ec59
+ (id)brc_errorAccountSessionOpenFailed;	// IMP=0x008000000004ec28
+ (id)brc_errorForRejectedDeletionOfItem:(id)arg1;	// IMP=0x008000000004eb3c
+ (id)brc_errorCollisionWithItem:(id)arg1;	// IMP=0x008000000004ea50
+ (id)brc_errorCiconiaCannotDefer;	// IMP=0x008000000004ea1f
+ (id)brc_errorCiconiaTimedout;	// IMP=0x008000000004e9ee
+ (id)brc_errorCiconiaFailed:(id)arg1;	// IMP=0x008000000004e9b6
+ (id)brc_errorCiconiaAborted:(id)arg1;	// IMP=0x008000000004e97e
+ (id)brc_errorCoreAnalyticsErrorCountMismatchWithExpected:(id)arg1 actual:(id)arg2;	// IMP=0x008000000004e93d
+ (id)brc_errorItemChanged;	// IMP=0x008000000004e90c
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;	// IMP=0x008000000004e67f
+ (id)brc_errorItemNotPausedFromSync;	// IMP=0x008000000004e64e
+ (id)brc_errorItemAlreadyPausedFromSyncByBundleID:(id)arg1;	// IMP=0x008000000004e561
+ (id)brc_errorItemIneligibleFromSyncForInode:(id)arg1;	// IMP=0x008000000004e474
+ (id)brc_errorItemInTrash;	// IMP=0x008000000004e443
+ (id)brc_errorItemNotShareable;	// IMP=0x008000000004e412
+ (id)brc_errorFolderHierarchyTooDeep;	// IMP=0x008000000004e3e1
+ (id)brc_errorFolderHasSharedSubitems;	// IMP=0x008000000004e3b0
+ (id)brc_errorFolderHasSharedSubitemsWithSharedByMeURLs:(id)arg1 sharedToMeURLs:(id)arg2;	// IMP=0x008000000004e259
+ (id)brc_errorItemAlreadyPartOfAShare;	// IMP=0x008000000004e228
+ (id)brc_errorSyncBlocked;	// IMP=0x008000000004e1f7
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;	// IMP=0x008000000004e1c6
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;	// IMP=0x008000000004e18e
+ (id)brc_errorCompatibilityIssue;	// IMP=0x008000000004e15d
+ (id)brc_errorDownloadCancelled;	// IMP=0x008000000004e12c
+ (id)brc_errorOperationCancelled;	// IMP=0x008000000004e0fb
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;	// IMP=0x008000000004e0b8
+ (id)brc_errorAccountMismatch;	// IMP=0x008000000004e087
+ (id)brc_errorDocumentEvicted;	// IMP=0x008000000004e056
+ (id)brc_errorDocumentIsNoLongerSharedAtIdentifier:(id)arg1;	// IMP=0x008000000004e01e
+ (id)brc_errorDocumentIsNotSharedAtIdentifier:(id)arg1;	// IMP=0x008000000004dfe6
+ (id)brc_errorDocumentIsNotShared;	// IMP=0x008000000004dfb5
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;	// IMP=0x008000000004de48
+ (id)brc_errorNoDocument:(id)arg1 underlyingPOSIXError:(int)arg2;	// IMP=0x008000000004dcfd
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingError:(id)arg2;	// IMP=0x008000000004dbb1
+ (id)brc_errorNoSuitableClientApp;	// IMP=0x008000000004db80
+ (id)brc_errorSyncDisabled:(id)arg1;	// IMP=0x008000000004db48
+ (id)brc_errorClientZoneNotFound:(id)arg1;	// IMP=0x008000000004db10
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;	// IMP=0x008000000004dad8
+ (id)brc_errorAppLibraryNotFound:(id)arg1;	// IMP=0x008000000004daa0
+ (id)brc_errorUnknownKey:(id)arg1;	// IMP=0x008000000004da68
+ (id)brc_errorItemNotFound:(id)arg1;	// IMP=0x008000000004d97e
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;	// IMP=0x008000000004d862
+ (id)brc_errorPermissionError:(id)arg1;	// IMP=0x008000000004d768
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;	// IMP=0x008000000004d64c
+ (id)brc_errorNotInCloud:(id)arg1;	// IMP=0x008000000004d534
+ (id)brc_errorNotOnDisk:(id)arg1;	// IMP=0x008000000004d42b
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;	// IMP=0x008000000004d3ea
+ (id)brc_errorMethodNotImplemented:(SEL)arg1;	// IMP=0x008000000004d30e
+ (id)brc_errorDaemonShouldBeLoggedOut;	// IMP=0x008000000004d2dd
+ (id)brc_errorLoggedOutWithUnderlyingError:(id)arg1;	// IMP=0x008000000004d1ed
+ (id)brc_errorLoggedOut;	// IMP=0x008000000004d1d2
+ (id)brc_errorNoBRItemService;	// IMP=0x008000000004d1a1
+ (id)brc_errorNotSupportedInFPFS;	// IMP=0x008000000004d170
+ (id)br_errorFromErrno;	// IMP=0x008000000004ce59
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;	// IMP=0x008000000004cce4
+ (id)br_errorWithPOSIXCode:(int)arg1;	// IMP=0x008000000004cb71
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4;	// IMP=0x008000000004c9e4
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x008000000004c863
- (id)br_fileProviderErrorWithFPFS:(_Bool)arg1;	// IMP=0x001000000001a543
- (id)br_fileProviderError;	// IMP=0x001000000001a51c
- (id)_createWrappedErrorWithDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000001a486
- (id)_br_populateUserInfoDictWithDomain:(id)arg1 code:(long long)arg2;	// IMP=0x0010000000019fb4
- (_Bool)_br_getFileProviderDomainErrorCode:(long long *)arg1;	// IMP=0x00100000000197f7
- (id)br_underlyingPOSIXError;	// IMP=0x001000000004d081
- (_Bool)br_isCloudDocsErrorCode:(long long)arg1;	// IMP=0x001000000004d008
- (_Bool)br_isNSXPCConnectionError;	// IMP=0x001000000004cf75
- (_Bool)br_isCocoaErrorCode:(long long)arg1;	// IMP=0x001000000004cefc
- (_Bool)br_isPOSIXErrorCode:(long long)arg1;	// IMP=0x001000000004ce83
@end

