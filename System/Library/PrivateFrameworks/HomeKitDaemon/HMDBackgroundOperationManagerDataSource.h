//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackgroundOperationManager, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDBackgroundOperationManagerDataSource : HMFObject
{
    HMDBackgroundOperationManager *_owner;	// 8 = 0x8
}

+ (id)name;	// IMP=0x0040000000d00a42
- (void).cxx_destruct;	// IMP=0x0000000000d00a31
@property(readonly) __weak HMDBackgroundOperationManager *owner; // @synthesize owner=_owner;
- (void)notifyDataSourceChanged;	// IMP=0x0000000000d009cc
@property(readonly, copy) NSDictionary *values;
- (id)initWithOperationManager:(id)arg1;	// IMP=0x0000000000d008bd

@end

