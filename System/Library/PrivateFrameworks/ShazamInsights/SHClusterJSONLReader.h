//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SHClusterJSONLReader : NSObject
{
    unsigned long long _index;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008471
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)importClusters:(id)arg1 toParentCluster:(id)arg2 startIndex:(unsigned long long)arg3;	// IMP=0x0000000000007f86
- (_Bool)parsedJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007e99
- (_Bool)readDataLineByLineFromURL:(id)arg1 error:(id *)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007e07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
