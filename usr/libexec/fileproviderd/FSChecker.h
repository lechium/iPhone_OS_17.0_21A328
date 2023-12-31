//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FSChecker : NSObject
{
    _Bool _itemIsInsideAPackage;	// 8 = 0x8
    _Bool _itemIsInsideAnIgnoredFolder;	// 9 = 0x9
}

@property _Bool itemIsInsideAnIgnoredFolder; // @synthesize itemIsInsideAnIgnoredFolder=_itemIsInsideAnIgnoredFolder;
@property _Bool itemIsInsideAPackage; // @synthesize itemIsInsideAPackage=_itemIsInsideAPackage;
- (void)enumerateItemsOnDiskAtURL:(id)arg1 detachedRoots:(id)arg2 usingFPFS:(_Bool)arg3 packageDetection:(unsigned int)arg4 delegate:(id)arg5;	// IMP=0x00100000000027c7
- (_Bool)isDataProtectedFileAtPath:(id)arg1 handle:(struct fpfs_item_handle *)arg2;	// IMP=0x00100000000026da

@end

