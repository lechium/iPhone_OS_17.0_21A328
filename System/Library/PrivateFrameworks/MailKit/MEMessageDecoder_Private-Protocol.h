//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailKit/MEMessageDecoder-Protocol.h>

@class MEDecodeContext, MEDecodedMessage, NSData;

@protocol MEMessageDecoder_Private <MEMessageDecoder>
- (void)decodedMessageForMessageData:(NSData *)arg1 decodeContext:(MEDecodeContext *)arg2 withCompletionHandler:(void (^)(MEDecodedMessage *))arg3;

@optional
- (MEDecodedMessage *)decodedMessageForMessageData:(NSData *)arg1 decodeContext:(MEDecodeContext *)arg2;
@end

