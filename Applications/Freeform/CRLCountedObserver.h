//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRLChangeSourceObserver;

@interface CRLCountedObserver : NSObject
{
    id <CRLChangeSourceObserver> _observer;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000272f11
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_count;
- (unsigned long long)decrementCount;	// IMP=0x0010000000272ce8
- (unsigned long long)incrementCount;	// IMP=0x0010000000272cd7
- (id)observerIgnoringCount;	// IMP=0x0010000000272cc1
- (id)observer;	// IMP=0x0010000000272ca0
- (id)initWithObserver:(id)arg1;	// IMP=0x0010000000272c34

@end

