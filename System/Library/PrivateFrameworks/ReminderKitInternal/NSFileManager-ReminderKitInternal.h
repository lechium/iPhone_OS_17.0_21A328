//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (ReminderKitInternal)
- (_Bool)rem_isEmptyDirectoryAtURL:(id)arg1 skipsHiddenFiles:(_Bool)arg2;	// IMP=0x00000000000b3250
- (_Bool)rem_fileExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x00000000000b2e40
- (_Bool)rem_fileExistsAtURL:(id)arg1;	// IMP=0x00000000000b2d10
- (_Bool)rem_createDirectoryIfNecessaryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b2bf0
- (id)rem_createProtectedTemporaryDirectoryIfNeededWithError:(id *)arg1;	// IMP=0x000000000026aa90
@end

