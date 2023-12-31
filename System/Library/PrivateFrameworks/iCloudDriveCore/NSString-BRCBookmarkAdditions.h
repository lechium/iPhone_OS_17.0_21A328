//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (BRCBookmarkAdditions)
+ (id)bookmarkDataWithDocumentID:(id)arg1 serverZone:(id)arg2;	// IMP=0x0060000000003b92
+ (id)itemResolutionStringWithDocumentID:(id)arg1;	// IMP=0x0060000000003b38
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;	// IMP=0x0060000000003a4e
+ (id)unsaltedBookmarkDataWithItemResolutionString:(id)arg1 serverZoneMangledID:(id)arg2;	// IMP=0x00600000000039b8
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZoneMangledID:(id)arg2 saltAccountDSID:(id)arg3;	// IMP=0x0060000000003881
+ (id)brc_groupDownloadStagePath;	// IMP=0x00600000000f2a36
+ (id)br_currentMobileDocumentsDirWithRefreshCache:(_Bool)arg1;	// IMP=0x00600000000f2200
+ (id)br_currentMobileDocumentsDir;	// IMP=0x00600000000f21ec
+ (id)brc_locateUbiquityTokenSaltInOldAccountPath:(id)arg1;	// IMP=0x00600000000f1d7e
+ (id)ubiquityTokenSaltFilename;	// IMP=0x00600000000f1d71
+ (id)brc_accountIDPathForAccountPath:(id)arg1;	// IMP=0x00600000000f1d55
+ (id)brc_currentCachesDir;	// IMP=0x00600000000f1ae5
+ (id)brc_hexadecimalStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0060000000173b64
+ (void)brc_addForcedPackageExtension:(id)arg1;	// IMP=0x00600000001cf782
+ (void)brc_loadForcedPackageExtensionsForCurrentPersona;	// IMP=0x00600000001cedd8
+ (void)brc_closeForcedPackageExtensionsForPersona:(id)arg1;	// IMP=0x00600000001ced8a
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZoneName:(id)arg2 ownerName:(id)arg3 accountDSID:(id)arg4 salted:(_Bool)arg5;	// IMP=0x00600000001d7b73
- (_Bool)parseBookmarkDataWithAccountSession:(id)arg1 docID:(id *)arg2 itemID:(id *)arg3 mangledID:(id *)arg4 unsaltedBookmarkData:(id *)arg5 error:(id *)arg6;	// IMP=0x00100000000040da
- (_Bool)parseUnsaltedBookmarkDataWithItemID:(id *)arg1 mangledID:(id *)arg2 error:(id *)arg3;	// IMP=0x0010000000003c1e
- (id)brc_dataFromHexidecimalString;	// IMP=0x0010000000173df3
- (id)brc_SHA1WithSalt:(id)arg1;	// IMP=0x0010000000173d0a
- (id)brc_SHA256;	// IMP=0x0010000000173c66
- (_Bool)brc_isBlacklistedPackageExtension;	// IMP=0x00100000001cf881
- (_Bool)brc_isForcedPackageExtension;	// IMP=0x00100000001cf80e
- (id)brc_fixDocumentExtensionIfNeededForShareURL:(id)arg1;	// IMP=0x00100000001f24d0
- (id)brc_mangledNameFromURLFragment:(_Bool)arg1;	// IMP=0x001000000023525d
@end

