//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/NSObject-Protocol.h>

@class NSArray, NSSet;

@protocol BPSWindowAssigner <NSObject>
- (NSSet *)updateAndReturnNewWindowStates:(NSArray *)arg1 input:(id)arg2;
- (NSSet *)assignWindow:(NSArray *)arg1 input:(id)arg2;
@end

