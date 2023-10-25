//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitInternal/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice, MTLHeap;

@protocol MTLResource <NSObject>
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (_Bool)isAliasable;
- (void)makeAliasable;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@end
