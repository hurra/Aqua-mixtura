// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2023 jo-hannes <jo-hannes@dev-urandom.de>

#ifndef MAINMODEL_H
#define MAINMODEL_H

#include "model/additive.h"
#include "model/malts.h"
#include "model/styles.h"
#include "model/watersources.h"

#include <QJsonObject>

class MainModel
{
 public:
  MainModel();

  void saveSources();
  void saveSources(const QString& path);

  void saveAdditive();
  void saveAdditive(const QString& path);

  void saveMalts();
  void saveMalts(const QString& path);

  void loadStyles();
  void saveStyles();
  void saveStyles(const QString& path);

  WaterSources* sources;
  Additive* additive;
  Malts* malts;
  Styles* styles;
  // mixtures
 private:

  QString configDir;
  QString sourcesFile;
  QString additiveFile;
  QString maltsFile;
  QString stylesFile;
};

#endif // MAINMODEL_H
