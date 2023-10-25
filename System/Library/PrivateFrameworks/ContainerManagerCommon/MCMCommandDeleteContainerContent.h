//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMCommandDeleteContainerContent
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x001000000003796d
+ (unsigned long long)command;	// IMP=0x0010000000037937
- (void).cxx_destruct;	// IMP=0x00000000000378f9
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void)execute;	// IMP=0x0000000000036aac
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000036a18
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000003695c
- (id)initWithContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x00000000000368b7

@end
