//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAGraph, MISSING_TYPE, NSMutableSet, NSString;

@interface SKGGraph : NSObject
{
    NSString *_resourcePath;	// 8 = 0x8
    unsigned long long _currentAddedNodeCount;	// 16 = 0x10
    unsigned long long _currentAddedEdgeCount;	// 24 = 0x18
    NSMutableSet *_nodeBatch;	// 32 = 0x20
    NSMutableSet *_edgeBatch;	// 40 = 0x28
    MAGraph *_graph;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001fc6b
- (void)dealloc;	// IMP=0x001000000001fbe6
- (void)closeGraph;	// IMP=0x001000000001fb8a
- (long long)edgeCacheCount;	// IMP=0x001000000001fb82
- (long long)edgeCount;	// IMP=0x001000000001fb0c
- (long long)nodeCacheCount;	// IMP=0x001000000001fb04
- (long long)nodeCount;	// IMP=0x001000000001fa8e
- (long long)countOfNodesWithLabel:(id)arg1;	// IMP=0x001000000001f9e5
- (id)nodesForNode:(id)arg1;	// IMP=0x001000000001f6e4
- (_Bool)commitBatch;	// IMP=0x001000000001f3d8
- (_Bool)batchAddNodes:(id)arg1 addEdges:(id)arg2;	// IMP=0x001000000001f2b1
- (MISSING_TYPE *)removeNodeSet:removeEdgeSet:cancelBlock: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001f146
- (_Bool)addNodes:(id)arg1 addEdges:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e2cd
- (_Bool)commitWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e25f
- (_Bool)flushWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e197
- (_Bool)clearWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e063
@property(readonly, nonatomic) _Bool available;
- (id)graph;	// IMP=0x001000000001e036
- (id)graphURL;	// IMP=0x001000000001dfa1
- (id)resourceRoot;	// IMP=0x001000000001df81
- (id)initWithResourceDirectoryPath:(id)arg1;	// IMP=0x001000000001dd9d

@end

