//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKPixelMatchStrategy : NSObject
{
}

- (double)antiAliasingDifferenceBetweenColor:(id)arg1 andColor:(id)arg2;	// IMP=0x0000000000006e79
- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;	// IMP=0x0000000000006d93
@property(readonly, nonatomic) double tolerance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
