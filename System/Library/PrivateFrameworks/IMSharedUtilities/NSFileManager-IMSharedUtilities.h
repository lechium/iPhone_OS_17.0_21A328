//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IMSharedUtilities)
- (id)im_randomTemporaryFileURLWithFileName:(id)arg1;	// IMP=0x00900000000b96fd
- (_Bool)__im_makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;	// IMP=0x00900000000b963e
- (_Bool)__im_isPathOnMissingVolume:(id)arg1;	// IMP=0x00900000000b958d
- (_Bool)__im_getItemsRemovedFromiCloudBackupsAtDirectoryPath:(id)arg1 outPaths:(id *)arg2 outRemovedPaths:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000b924b
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onDirectoryAndChildrenAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x00900000000b8f90
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onItemAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x00900000000b8e03
- (_Bool)__im_getiCloudBackupAttributeForItemAtPath:(id)arg1 attributeValue:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00900000000b8ce2
@end

