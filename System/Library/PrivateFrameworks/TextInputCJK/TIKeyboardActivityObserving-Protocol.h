//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCJK/NSObject-Protocol.h>

@class TIKeyboardActivityContext;

@protocol TIKeyboardActivityObserving <NSObject>
- (void)keyboardActivityDidTransition:(TIKeyboardActivityContext *)arg1;

@optional
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
@end

