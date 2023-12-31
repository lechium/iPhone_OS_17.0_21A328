//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreLogUpdateOperation
{
    NSArray *_values;	// 40 = 0x28
    long long _maskValue;	// 48 = 0x30
    long long _setValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000818d53
@property(nonatomic) long long setValue; // @synthesize setValue=_setValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)mainReturningError;	// IMP=0x0000000000818940
- (id)initWithRowIDs:(id)arg1 failedPushedTo:(unsigned long long)arg2;	// IMP=0x0000000000818927
- (id)initWithRowIDs:(id)arg1 successfullyPushedTo:(unsigned long long)arg2;	// IMP=0x000000000081890e
- (id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3;	// IMP=0x0000000000818869

@end

