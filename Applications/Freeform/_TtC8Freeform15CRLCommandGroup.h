//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8Freeform15CRLCommandGroup
{
    MISSING_TYPE *commands;	// 16 = 0x10
    MISSING_TYPE *_actionString;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000008b0860
- (id)init;	// IMP=0x00100000008b07a0
- (void)addCommands:(id)arg1;	// IMP=0x00100000008b0710
- (void)addCommand:(id)arg1;	// IMP=0x00100000008b0640
- (void)addCommandIfNotNil:(id)arg1;	// IMP=0x00100000008b0560
@property(nonatomic, readonly) _Bool isEmpty;
- (_Bool)supportsSimultaneousExecutionWithOtherCommands;	// IMP=0x00100000008b04e0
@property(nonatomic, copy) NSString *actionString;
- (id)initWithCommands:(id)arg1;	// IMP=0x00100000008b03a0
@property(nonatomic, copy) NSArray *commands;
@property(nonatomic, readonly) _Bool committed;

@end

