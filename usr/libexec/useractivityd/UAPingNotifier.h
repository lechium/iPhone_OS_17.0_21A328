//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface UAPingNotifier
{
    NSMutableSet *_pongItems;	// 8 = 0x8
    long long _pongCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000030ec
@property long long pongCount; // @synthesize pongCount=_pongCount;
@property(readonly, copy) NSMutableSet *pongItems; // @synthesize pongItems=_pongItems;
- (id)statusString;	// IMP=0x0010000000003003
- (void)setItems:(id)arg1;	// IMP=0x0010000000002961
- (id)items;	// IMP=0x0010000000002959
- (_Bool)active;	// IMP=0x0010000000002951
- (id)initWithManager:(id)arg1;	// IMP=0x00100000000028dd

@end
