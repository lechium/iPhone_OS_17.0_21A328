//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, UIDelayedAction;
@protocol UIDictationTipHandlerDelegate;

__attribute__((visibility("hidden")))
@interface UIDictationTipInsertionHandler : NSObject
{
    id <UIDictationTipHandlerDelegate> _delegate;	// 8 = 0x8
    NSMutableString *_insertionText;	// 16 = 0x10
    UIDelayedAction *_finalizeAction;	// 24 = 0x18
    long long _textRecorderStatus;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000016b33a1
@property(nonatomic) long long textRecorderStatus; // @synthesize textRecorderStatus=_textRecorderStatus;
@property(retain, nonatomic) UIDelayedAction *finalizeAction; // @synthesize finalizeAction=_finalizeAction;
@property(retain, nonatomic) NSMutableString *insertionText; // @synthesize insertionText=_insertionText;
@property(nonatomic) __weak id <UIDictationTipHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startRecodingText:(id)arg1;	// IMP=0x00000000016b32b3
- (void)resetHandler;	// IMP=0x00000000016b3271
- (void)recordDictationTipText:(id)arg1;	// IMP=0x00000000016b31ca
- (void)finalizeRecordedText;	// IMP=0x00000000016b303a
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000016b2f81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
