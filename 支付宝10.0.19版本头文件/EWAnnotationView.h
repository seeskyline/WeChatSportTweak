//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMapKitAnnotationView.h"

@class NSString, UIImageView;

@interface EWAnnotationView : APMapKitAnnotationView
{
    _Bool _active;
    NSString *_uuid;
    id <EWAnnotationViewProtocal> _dataSource;
    UIImageView *_avatarBackgroundImageView;
    UIImageView *_avatarImageView;
}

@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *avatarBackgroundImageView; // @synthesize avatarBackgroundImageView=_avatarBackgroundImageView;
@property(retain, nonatomic) id <EWAnnotationViewProtocal> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)setAvatarCornerFrom:(double)arg1 to:(double)arg2;
- (void)updateAnnotation:(id)arg1;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

