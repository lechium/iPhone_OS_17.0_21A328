//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFEmojiPreferences, EMKGlyphRippler, EMKOverlayView, EMKTextEnumerator, EMKTextView, NSArray, NSString, NSTextLayoutManager, NSTimer, UIView, _EMKTextContainerOverlayView, _EMKTouchInfo;

__attribute__((visibility("hidden")))
@interface _EMKTextKit2Controller : NSObject
{
    _Bool _darkModeEnabled;	// 8 = 0x8
    _Bool _emojiConversionEnabled;	// 9 = 0x9
    _Bool _emojiConversionActive;	// 10 = 0xa
    _Bool _emojiAnimationActive;	// 11 = 0xb
    UIView *_textContainerOverlayView;	// 16 = 0x10
    NSArray *_emojiConversionLanguages;	// 24 = 0x18
    EMKTextView *_textView;	// 32 = 0x20
    _EMKTextContainerOverlayView *_containerOverlayView;	// 40 = 0x28
    EMFEmojiPreferences *_emojiPreferences;	// 48 = 0x30
    EMKOverlayView *_overlayView;	// 56 = 0x38
    NSTimer *_rippleTimer;	// 64 = 0x40
    EMKGlyphRippler *_rippler;	// 72 = 0x48
    EMKTextEnumerator *_textEnumerator;	// 80 = 0x50
    _EMKTouchInfo *_lastTouchInfo;	// 88 = 0x58
}

+ (id)log;	// IMP=0x0010000000005cac
- (void).cxx_destruct;	// IMP=0x000000000000897d
@property(nonatomic, getter=isEmojiAnimationActive) _Bool emojiAnimationActive; // @synthesize emojiAnimationActive=_emojiAnimationActive;
@property(retain, nonatomic) _EMKTouchInfo *lastTouchInfo; // @synthesize lastTouchInfo=_lastTouchInfo;
@property(retain, nonatomic) EMKTextEnumerator *textEnumerator; // @synthesize textEnumerator=_textEnumerator;
@property(retain, nonatomic) EMKGlyphRippler *rippler; // @synthesize rippler=_rippler;
@property(retain) NSTimer *rippleTimer; // @synthesize rippleTimer=_rippleTimer;
@property(retain) EMKOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain) EMFEmojiPreferences *emojiPreferences; // @synthesize emojiPreferences=_emojiPreferences;
@property(retain, nonatomic) _EMKTextContainerOverlayView *containerOverlayView; // @synthesize containerOverlayView=_containerOverlayView;
@property __weak EMKTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSArray *emojiConversionLanguages; // @synthesize emojiConversionLanguages=_emojiConversionLanguages;
@property(nonatomic, getter=isEmojiConversionActive) _Bool emojiConversionActive; // @synthesize emojiConversionActive=_emojiConversionActive;
@property(nonatomic, getter=isEmojiConversionEnabled) _Bool emojiConversionEnabled; // @synthesize emojiConversionEnabled=_emojiConversionEnabled;
@property(nonatomic, getter=isDarkModeEnabled) _Bool darkModeEnabled; // @synthesize darkModeEnabled=_darkModeEnabled;
- (id)textContentStorage:(id)arg1 textParagraphWithRange:(struct _NSRange)arg2;	// IMP=0x00000000000083f4
- (_Bool)textContentManager:(id)arg1 shouldEnumerateTextElement:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000083ec
- (void)dismissOverlayView;	// IMP=0x000000000000831b
- (void)_updateOverlayView;	// IMP=0x000000000000828c
- (void)textViewDidLayoutSubviews;	// IMP=0x0000000000008210
- (void)replaceRange:(struct _NSRange)arg1 withEmojiToken:(id)arg2 language:(id)arg3;	// IMP=0x0000000000007bc2
- (void)textTapGestureRecognized:(id)arg1;	// IMP=0x0000000000007718
- (_Bool)touchHasEmojiSignificance:(id)arg1;	// IMP=0x0000000000006627
- (void)__startAnimation;	// IMP=0x00000000000063c2
- (void)__stopAnimation;	// IMP=0x00000000000062b0
@property(retain, nonatomic) UIView *textContainerOverlayView; // @synthesize textContainerOverlayView=_textContainerOverlayView;
- (void)_startOrStopAnimation;	// IMP=0x00000000000060ed
- (void)updateEmojiDisplay:(id)arg1;	// IMP=0x0000000000005fa5
- (void)_startRippleAnimation;	// IMP=0x0000000000005ed0
@property(readonly) NSTextLayoutManager *_layoutManager;
- (id)initWithTextView:(id)arg1 emojiPreferences:(id)arg2;	// IMP=0x0000000000005d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

