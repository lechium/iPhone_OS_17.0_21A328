//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SRSensorPruner;

__attribute__((visibility("hidden")))
@interface SRSensorPrunerClient : NSObject
{
    SRSensorPruner *_pruner;	// 8 = 0x8
}

+ (id)prunerClientWithPruner:(id)arg1;	// IMP=0x0010000000010eef
- (void).cxx_destruct;	// IMP=0x0000000000010fc4
@property __weak SRSensorPruner *pruner; // @synthesize pruner=_pruner;
- (void)resetDatastoreFiles:(id)arg1;	// IMP=0x0000000000010f74
- (id)initWithPruner:(id)arg1;	// IMP=0x0000000000010f1e

@end

