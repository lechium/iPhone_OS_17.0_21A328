//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextViewDelegate-Protocol.h"

@class SRSpeechRecognizedCorrectionTextView;

@protocol SRUtteranceCorrectionTextViewDelegate <UITextViewDelegate>
- (void)utteranceTextDidReceiveReturnKey:(SRSpeechRecognizedCorrectionTextView *)arg1;
- (void)utteranceTextDidResignFirstResponder:(SRSpeechRecognizedCorrectionTextView *)arg1;
- (void)utteranceTextDidBecomeFirstResponder:(SRSpeechRecognizedCorrectionTextView *)arg1;
@end
