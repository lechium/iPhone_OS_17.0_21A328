//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MFMessageActionRule : NSObject
{
    NSArray *_actions;	// 8 = 0x8
}

+ (id)log;	// IMP=0x002000000008b5d7
- (void).cxx_destruct;	// IMP=0x002000000008c609
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (unsigned long long)_flagColorForActionFlagColor:(long long)arg1;	// IMP=0x001000000008c5e8
- (id)_firstActionsDestination;	// IMP=0x001000000008c512
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008c507
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008c3ed
- (void)performOperationOnMessages:(id)arg1 withMessageChangeManager:(id)arg2;	// IMP=0x001000000008b862
- (_Bool)shouldIncludeInNewMessagesSet;	// IMP=0x001000000008b82f
- (_Bool)canExecuteRuleOnMessage:(id)arg1;	// IMP=0x001000000008b733
- (id)initWithMessageActions:(id)arg1;	// IMP=0x001000000008b6b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

