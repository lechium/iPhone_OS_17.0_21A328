//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HomeStorageOutlineNode;

@interface HomeStorage : NSObject
{
    HomeStorageOutlineNode *_rootNode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000096310d
- (id)_storageNodeForExpandedIdentifierPaths:(id)arg1;	// IMP=0x0010000000962cb3
- (void)storeExpandedIdentifierPaths:(id)arg1 forSection:(id)arg2;	// IMP=0x00100000009628fe
- (id)expandedIdentifierPathsInSection:(id)arg1 defaultExpandedIdentifierPaths:(id)arg2;	// IMP=0x00100000009626da
- (void)_visitNode:(id)arg1 identifierPath:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000962535
- (void)_visitAllNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000009624a2
- (void)_writeToUserDefaults;	// IMP=0x0010000000962416
- (void)_loadFromUserDefaults;	// IMP=0x0010000000962379
- (id)init;	// IMP=0x001000000096232d

@end
