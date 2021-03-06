//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MMDPImageMarkParam : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasFileid;
    _Bool _hasExpr;
    _Bool _hasPosition;
    _Bool _hasTransparency;
    _Bool _hasWidth;
    _Bool _hasHeight;
    _Bool _hasX;
    _Bool _hasY;
    _Bool _hasPwh;
    _Bool _hasPxy;
    unsigned int _position;
    unsigned int _transparency;
    unsigned int _width;
    unsigned int _height;
    unsigned int _x;
    unsigned int _y;
    unsigned int _pwh;
    unsigned int _pxy;
    NSString *_fileid;
    NSString *_expr;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) unsigned int pxy; // @synthesize pxy=_pxy;
@property(nonatomic) unsigned int pwh; // @synthesize pwh=_pwh;
@property(nonatomic) unsigned int y; // @synthesize y=_y;
@property(nonatomic) unsigned int x; // @synthesize x=_x;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int transparency; // @synthesize transparency=_transparency;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *expr; // @synthesize expr=_expr;
@property(retain, nonatomic) NSString *fileid; // @synthesize fileid=_fileid;
@property(readonly) _Bool hasPxy; // @synthesize hasPxy=_hasPxy;
@property(readonly) _Bool hasPwh; // @synthesize hasPwh=_hasPwh;
@property(readonly) _Bool hasY; // @synthesize hasY=_hasY;
@property(readonly) _Bool hasX; // @synthesize hasX=_hasX;
@property(readonly) _Bool hasHeight; // @synthesize hasHeight=_hasHeight;
@property(readonly) _Bool hasWidth; // @synthesize hasWidth=_hasWidth;
@property(readonly) _Bool hasTransparency; // @synthesize hasTransparency=_hasTransparency;
@property(readonly) _Bool hasPosition; // @synthesize hasPosition=_hasPosition;
@property(readonly) _Bool hasExpr; // @synthesize hasExpr=_hasExpr;
@property(readonly) _Bool hasFileid; // @synthesize hasFileid=_hasFileid;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

