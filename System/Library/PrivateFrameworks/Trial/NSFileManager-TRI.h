//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRI)
+ (id)triArbitraryFileInDirWithPath:(id)arg1;	// IMP=0x006000000006409c
+ (_Bool)triIdempotentCreateDirectoryOrFaultWithPath:(id)arg1;	// IMP=0x0060000000063f72
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;	// IMP=0x0060000000063d3f
+ (_Bool)triHasFileProtection:(id)arg1;	// IMP=0x0060000000063add
- (_Bool)triRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000635f6
- (id)triCreateDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000633d5
- (id)triPath:(id)arg1 relativeToParentPath:(id)arg2;	// IMP=0x0010000000063128
- (_Bool)triSafeCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000062fa8
@end

