//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Coordination/COMessageChannelRequest.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface COMTPerformActionRequest : COMessageChannelRequest
{
    NSArray *_actions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000081f7f
- (void).cxx_destruct;	// IMP=0x0000000000081f98
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000081ee4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000081c80
- (id)initWithActions:(id)arg1;	// IMP=0x0000000000081c06

@end
