//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NURenderResult-Protocol.h>

@protocol NUImageProperties;

@protocol NUAuxiliaryPropertiesResult <NURenderResult>
@property(readonly) id <NUImageProperties> properties;
@property(readonly) _Bool canPropagateOriginalAuxiliaryData;
@end
