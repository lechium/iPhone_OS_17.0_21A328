//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSPromise;

__attribute__((visibility("hidden")))
@interface AMSBridgedBagValue
{
    AMSPromise *_valuePromise;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000020c52c
@property(retain, nonatomic) AMSPromise *valuePromise; // @synthesize valuePromise=_valuePromise;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000020c414
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;	// IMP=0x000000000020c37c

@end
