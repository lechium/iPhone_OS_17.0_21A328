//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TMLJSONObject.h"

@class NSString;

@interface TMLJSONObjectDerived : TMLJSONObject
{
    TMLJSONObject *_parent;	// 56 = 0x38
    NSString *_keyPath;	// 64 = 0x40
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000031082
- (void).cxx_destruct;	// IMP=0x0000000000031538
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000031488
- (void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000313b9
- (id)valueForKeyPath:(id)arg1;	// IMP=0x0000000000031313
- (id)valueForKey:(id)arg1;	// IMP=0x000000000003126d
- (void)setRawJSON:(id)arg1;	// IMP=0x0000000000031267
- (id)rawJSON;	// IMP=0x0000000000031162
- (id)initWithParent:(id)arg1 keyPath:(id)arg2;	// IMP=0x00000000000310a1

@end

